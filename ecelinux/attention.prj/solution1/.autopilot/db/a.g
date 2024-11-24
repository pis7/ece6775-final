#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/pis7/ece6775-final/ecelinux/attention.prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
