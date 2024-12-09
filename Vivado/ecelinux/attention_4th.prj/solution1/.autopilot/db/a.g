#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/pis7/ece6775/ece6775-final/Vivado/ecelinux/attention_4th.prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
