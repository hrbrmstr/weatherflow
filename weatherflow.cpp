#include <iostream>
#include <fstream>
#include <netinet/in.h>
#include <functional>
#include <signal.h>
#include <string.h>

void bye(int sig) {
  exit(0);
}


// Log WeatherFlow Tempest UDP broadcast messages to stdout
// Ref: https://weatherflow.github.io/Tempest/api/udp/v171/
int main(int argc, char *argv[]) {

  signal(SIGINT, bye);

  struct sockaddr_in si_me, si_other;

  int s = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);

  int port = 50222;
  int broadcast = 1;

  setsockopt(s, SOL_SOCKET, SO_BROADCAST, &broadcast, sizeof broadcast);

  memset(&si_me, 0, sizeof(si_me));

  si_me.sin_family = AF_INET;
  si_me.sin_port = htons(port);
  si_me.sin_addr.s_addr = INADDR_ANY;

  ::bind(s, (sockaddr *)&si_me, sizeof(sockaddr));

  while(true) {

    char buf[10*1024];
    unsigned slen = sizeof(sockaddr);

    recvfrom(s, buf, sizeof(buf)-1, 0, (sockaddr *)&si_other, &slen);

    std::string record = buf;

    record.erase(remove(record.begin(), record.end(), 0x01), record.end()); 

    std::cout << record << std::endl;

  }

}
