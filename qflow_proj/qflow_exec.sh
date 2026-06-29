#!/bin/tcsh -f
#-------------------------------------------
# qflow exec script for project .
#-------------------------------------------

# /apps/vlsi/share/qflow/scripts/synthesize.sh . vega_top ./vega_top.rtl.v || exit 1
# /apps/vlsi/share/qflow/scripts/placement.sh -d . vega_top || exit 1
# /apps/vlsi/share/qflow/scripts/opensta.sh  . vega_top || exit 1
# /apps/vlsi/share/qflow/scripts/opentimer.sh -a . vega_top || exit 1
# /apps/vlsi/share/qflow/scripts/vesta.sh -a . vega_top || exit 1
# /apps/vlsi/share/qflow/scripts/router.sh . vega_top || exit 1
# /apps/vlsi/share/qflow/scripts/opensta.sh  -d . vega_top || exit 1
# /apps/vlsi/share/qflow/scripts/opentimer.sh -a -d . vega_top || exit 1
# /apps/vlsi/share/qflow/scripts/vesta.sh -a -d . vega_top || exit 1
# /apps/vlsi/share/qflow/scripts/migrate.sh . vega_top || exit 1
# /apps/vlsi/share/qflow/scripts/drc.sh . vega_top || exit 1
# /apps/vlsi/share/qflow/scripts/lvs.sh . vega_top || exit 1
/apps/vlsi/share/qflow/scripts/gdsii.sh . vega_top || exit 1
# /apps/vlsi/share/qflow/scripts/cleanup.sh . vega_top || exit 1
# /apps/vlsi/share/qflow/scripts/display.sh . vega_top || exit 1
