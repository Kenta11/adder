open_project  $env(HLS_TARGET)
open_solution $env(HLS_SOLUTION)

set_top $env(HLS_TARGET)
set_part {xc7z020clg484-1}
create_clock -period 10 -name default
source "directives.tcl"

csynth_design
