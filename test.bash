#!/bin/bash

./weatherflow & echo $! > run.pid 
PID=$(<run.pid)
RES=$(leaks -quiet ${PID} | grep LEAK: || true)
rm run.pid
killall weatherflow
exit $RES
