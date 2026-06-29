gds readonly true
gds rescale false
gds read /apps/vlsi/share/qflow/tech/osu035/osu035_stdcells.gds2
load vega_top
drc on
select top cell
expand

box values 39500 22350 39525 22385
puts stdout "CLUSTER1_START"
select area
what
puts stdout "CLUSTER1_END"

box values 20040 20070 20056 20105
puts stdout "CLUSTER2_START"
select area
what
puts stdout "CLUSTER2_END"

box values 39464 19068 39480 19105
puts stdout "CLUSTER3_START"
select area
what
puts stdout "CLUSTER3_END"

quit
