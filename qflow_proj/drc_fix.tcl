gds readonly true
gds rescale false
gds read /apps/vlsi/share/qflow/tech/osu035/osu035_stdcells.gds2
load vega_top
drc on
select top cell
expand

drc check
drc catchup
puts stdout "BEFORE_FIX: [drc list count total]"

# Cluster 1: erase a thin sliver of metal1 to clear spacing
box values 39512 22366 39520 22368
erase metal1
box values 39500 22368 39508 22380
erase metal1

# Cluster 2
box values 20044 20086 20052 20100
erase metal1
box values 20044 20072 20052 20074
erase metal1

# Cluster 3
box values 39468 19086 39476 19100
erase metal1
box values 39468 19072 39476 19074
erase metal1

drc check
drc catchup
puts stdout "AFTER_FIX: [drc list count total]"

save vega_top
quit
