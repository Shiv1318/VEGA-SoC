gds readonly true
gds rescale false
gds read /apps/vlsi/share/qflow/tech/osu035/osu035_stdcells.gds2
load vega_top
drc on
select top cell
expand
drc check
drc catchup
set dcount [drc list count total]
puts stdout "Total DRC errors: $dcount"

# Find and print each violation location
set fid [open "drc_violations.txt" w]
drc find
set i 0
while {$i < $dcount} {
    set why [drc find]
    puts $fid "Violation $i: $why"
    incr i
}
close $fid
puts stdout "Saved to drc_violations.txt"
quit
