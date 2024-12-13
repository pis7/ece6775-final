# This Catapult LB script has been generated to expand the characterization range(es)
# of components of the Catapult base library(ies) to fit the current design
# 
# Running this script is optional but using the updated library should result in improved correlation.
# 
# Run this script in Catapult LB with the base library loaded or uncomment the "library load" command(s)

proc setup_workdir { libname } {
  set workdir [library get /LIBS/${libname}/WORKING_DIR]
  if {![file writable ${workdir}]} {
    set char_dir [file join [pwd] "${libname}.char"]
    catch {file mkdir $char_dir}
    library set /LIBS/${libname} -- -WORKING_DIR $char_dir
    if {  [file writable $char_dir]} {
      puts "Note: Characterization directory (WORKING_DIR) set to:  $char_dir"
    } else {
      puts "Error: Characterization directory (WORKING_DIR) for library ${libname} is not writable!"
    }
  }
}

#library load /opt/siemens/catapult/2024.1_2-1117371/Mgc_home/pkgs/siflibs/nangate/nangate-45nm_beh.lib
setup_workdir nangate-45nm_beh

library set /LIBS/nangate-45nm_beh/MODS/mgc_add/PARAMETERS/width_b -- -CHAR_RANGE {1, 2 to 2, 4 to 24, 32 to 32, 64 to 64}
library set /LIBS/nangate-45nm_beh/MODS/mgc_mul_pipe/PARAMETERS/n_inreg -- -CHAR_RANGE {0 to 0, 2}
library set /LIBS/nangate-45nm_beh/MODS/mgc_add/PARAMETERS/width -- -CHAR_RANGE {1, 2 to 2, 4 to 24, 32 to 32, 64 to 64}
library set /LIBS/nangate-45nm_beh/MODS/mgc_add/PARAMETERS/width_z -- -CHAR_RANGE {2, 3 to 3, 5 to 25, 33 to 33, 65 to 65}
library set /LIBS/nangate-45nm_beh/MODS/mgc_mul/PARAMETERS/signd_b -- -CHAR_RANGE {0, 1 to 1}
library set /LIBS/nangate-45nm_beh/MODS/mgc_mul_pipe/PARAMETERS/signd_b -- -CHAR_RANGE {0, 1 to 1}
library set /LIBS/nangate-45nm_beh/MODS/mgc_div/PARAMETERS/width_a -- -CHAR_RANGE {4 to 16, 72}
library set /LIBS/nangate-45nm_beh/MODS/mgc_div/PARAMETERS/width_b -- -CHAR_RANGE {4 to 16, 64}
library set /LIBS/nangate-45nm_beh/MODS/mgc_mul/PARAMETERS/width_a -- -CHAR_RANGE {4 to 16, 24 to 32 by 8, 40}
library set /LIBS/nangate-45nm_beh/MODS/mgc_mul/PARAMETERS/width_b -- -CHAR_RANGE {4 to 16, 24 to 32 by 8, 80}
library set /LIBS/nangate-45nm_beh/MODS/mgc_mul/PARAMETERS/width_z -- -CHAR_RANGE {4 to 16, 24 to 32 by 8, 64 to 64, 100}
library set /LIBS/nangate-45nm_beh/MODS/mgc_mul_pipe/PARAMETERS/width_a -- -CHAR_RANGE {4 to 4, 8 to 8, 16 to 16, 32 to 32, 40}
library set /LIBS/nangate-45nm_beh/MODS/mgc_mul_pipe/PARAMETERS/width_b -- -CHAR_RANGE {4 to 4, 8 to 8, 16 to 16, 32 to 32, 80}
library set /LIBS/nangate-45nm_beh/MODS/mgc_mul_pipe/PARAMETERS/width_z -- -CHAR_RANGE {8 to 8, 16 to 16, 32 to 32, 64 to 64, 100}
library set /LIBS/nangate-45nm_beh/MODS/mgc_mul/PARAMETERS/signd_a -- -CHAR_RANGE {0, 1 to 1}
library set /LIBS/nangate-45nm_beh/MODS/mgc_mul_pipe/PARAMETERS/signd_a -- -CHAR_RANGE {0, 1 to 1}
library set /LIBS/nangate-45nm_beh/MODS/mgc_mux/PARAMETERS/ctrlw -- -CHAR_RANGE {1 to 5 by 1, 16}
library set /LIBS/nangate-45nm_beh/MODS/mgc_mux/PARAMETERS/p2ctrlw -- -CHAR_RANGE {2 to 2, 4 to 4, 8 to 8, 16 to 16, 32 to 32, 36864}
library set /LIBS/nangate-45nm_beh/MODS/mgc_shift_l/PARAMETERS/width_a -- -CHAR_RANGE {1, 4 to 4, 8 to 8, 16 to 16, 32 to 32}
library set /LIBS/nangate-45nm_beh/MODS/mgc_shift_bl/PARAMETERS/width_a -- -CHAR_RANGE {1, 4 to 4, 8 to 8, 16 to 16, 32 to 32}
library set /LIBS/nangate-45nm_beh/MODS/mgc_add/PARAMETERS/width -- -CHAR_RANGE {2 to 2, 4 to 24, 32 to 32, 64 to 64, 77}
library set /LIBS/nangate-45nm_beh/MODS/mgc_add/PARAMETERS/width_b -- -CHAR_RANGE {2 to 2, 4 to 24, 32 to 32, 64 to 64, 77}
library set /LIBS/nangate-45nm_beh/MODS/mgc_add/PARAMETERS/width_z -- -CHAR_RANGE {3 to 3, 5 to 25, 33 to 33, 65 to 65, 78}
library set /LIBS/nangate-45nm_beh/MODS/mgc_reg_pos/PARAMETERS/has_enable -- -CHAR_RANGE {0 to 0, 1}
library set /LIBS/nangate-45nm_beh/MODS/mgc_reg_pos/PARAMETERS/enable_on -- -CHAR_RANGE {0 to 0, 1}
library set /LIBS/nangate-45nm_beh/MODS/mgc_mux1hot/PARAMETERS/ctrlw -- -CHAR_RANGE {1, 2 to 2, 4 to 32}
library set /LIBS/nangate-45nm_beh/MODS/mgc_or/PARAMETERS/ninps -- -CHAR_RANGE {2 to 2, 4 to 32, 48}
# The "library characterize" command below requires that: 
#   1. characterization working directory is set (default: pwd);
#   2. library exists and is write accessible;
#   3. paths to technology libraries are set to correct locations;
#   4. the downstream tool used to characterize the library is available;
library characterize
