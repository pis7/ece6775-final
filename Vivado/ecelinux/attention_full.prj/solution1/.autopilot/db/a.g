#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/pis7/ece6775/ece6775-final/ecelinux/attention_full.prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}