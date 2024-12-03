#! /bin/csh -f
setenv SYSTEMC_HOME /opt/siemens/catapult/2024.1_2-1117371/Mgc_home/shared
setenv SYSTEMC_LIB_DIR /opt/siemens/catapult/2024.1_2-1117371/Mgc_home/shared/lib
setenv CXX_FLAGS "-g -DCALYPTO_SKIP_SYSTEMC_VERSION_CHECK"
setenv LD_FLAGS "-lpthread"
setenv OSSIM ddd
setenv PATH /opt/siemens/catapult/2024.1_2-1117371/Mgc_home/bin:$PATH
