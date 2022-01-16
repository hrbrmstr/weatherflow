#  weatherflow

Retrieve [UDP broadcast records](https://weatherflow.github.io/Tempest/api/udp/v171/) from WeatherFlow Tempest weather stations and write to stdout.

```bash
$ weatherflow
{"serial_number":"ST-00054920","type":"rapid_wind","hub_sn":"HB-00069665","ob":[1642340887,0.00,0]}
{"serial_number":"HB-00069665","type":"hub_status","firmware_revision":"177","uptime":68441,"rssi":-47,"timestamp":1642340890,"reset_flags":"BOR,PIN,POR","seq":6831,"radio_stats":[25,1,0,3,16637],"mqtt_stats":[5,18]}
{"serial_number":"ST-00054920","type":"rapid_wind","hub_sn":"HB-00069665","ob":[1642340890,0.00,0]}-47,"timestamp":1642340890,"reset_flags":"BOR,PIN,POR","seq":6831,"radio_stats":[25,1,0,3,16637],"mqtt_stats":[5,18]}
{"serial_number":"ST-00054920","type":"rapid_wind","hub_sn":"HB-00069665","ob":[1642340893,0.00,0]}-47,"timestamp":1642340890,"reset_flags":"BOR,PIN,POR","seq":6831,"radio_stats":[25,1,0,3,16637],"mqtt_stats":[5,18]}
{"serial_number":"ST-00054920","type":"rapid_wind","hub_sn":"HB-00069665","ob":[1642340896,0.00,0]}-47,"timestamp":1642340890,"reset_flags":"BOR,PIN,POR","seq":6831,"radio_stats":[25,1,0,3,16637],"mqtt_stats":[5,18]}
{"serial_number":"ST-00054920","type":"device_status","hub_sn":"HB-00069665","timestamp":1642340897,"uptime":68453,"voltage":2.709,"firmware_revision":165,"rssi":-68,"hub_rssi":-61,"sensor_status":655360,"debug":0}]}
{"serial_number":"ST-00054920","type":"obs_st","hub_sn":"HB-00069665","obs":[[1642340897,0.00,0.00,0.00,0,3,1025.98,-14.33,52.10,25401,0.26,212,0.000000,0,0,0,2.709,1]],"firmware_revision":165}us":655360,"debug":0}]}
{"serial_number":"ST-00054920","type":"rapid_wind","hub_sn":"HB-00069665","ob":[1642340899,0.00,0]}0.00,0,3,1025.98,-14.33,52.10,25401,0.26,212,0.000000,0,0,0,2.709,1]],"firmware_revision":165}us":655360,"debug":0}]}
{"serial_number":"HB-00069665","type":"hub_status","firmware_revision":"177","uptime":68451,"rssi":-46,"timestamp":1642340900,"reset_flags":"BOR,PIN,POR","seq":6832,"radio_stats":[25,1,0,3,16637],"mqtt_stats":[5,18]}
{"serial_number":"ST-00054920","type":"rapid_wind","hub_sn":"HB-00069665","ob":[1642340902,0.00,0]}-46,"timestamp":1642340900,"reset_flags":"BOR,PIN,POR","seq":6832,"radio_stats":[25,1,0,3,16637],"mqtt_stats":[5,18]}
```