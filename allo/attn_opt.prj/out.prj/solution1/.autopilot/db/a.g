#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/bg372/ece6775-final/allo/attn_opt.prj/out.prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
