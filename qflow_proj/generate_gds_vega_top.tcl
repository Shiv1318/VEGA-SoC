drc off
box 0 0 0 0
gds readonly true
gds rescale false
gds read /apps/vlsi/share/qflow/tech/osu035/osu035_stdcells.gds2
load vega_top
select top cell
expand
gds write vega_top
quit
