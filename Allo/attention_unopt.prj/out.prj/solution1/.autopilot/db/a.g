#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/bg372/ece6775-final/Allo/attention_unopt.prj/out.prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}