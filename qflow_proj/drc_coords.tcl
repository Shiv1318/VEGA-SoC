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
puts stdout "Total: $dcount"
drc find
puts stdout "Box: [box values]"
quit
