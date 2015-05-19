#!/bin/bash
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
cd "$DIR/../"
"$DIR/compile_scripts.sh" -i framework -o lib/framework_precompiled/framework_precompiled.zip -p framework -m zip -q
echo "UPDATE lib/framework_precompiled/framework_precompiled.zip"

# echo ""
# echo "### UPDATING ###"
# echo ""
# echo "updating all framework_precompiled.zip"
# echo ""
# echo templates/PROJECT_TEMPLATE_01/res/framework_precompiled.zip
# cp lib/framework_precompiled/framework_precompiled.zip templates/PROJECT_TEMPLATE_01/res/

# for dest in `find ${QUICK_V3_ROOT} -type f | grep "/res/framework_precompiled.zip"`
# do
#     echo $dest
#     cp lib/framework_precompiled/framework_precompiled.zip $dest
# done

"$DIR/compile_scripts.sh" -i framework -o lib/framework_precompiled/framework_precompiled_wp8.zip -p framework -m zip -luac -q
echo "UPDATE lib/framework_precompiled/framework_precompiled_wp8.zip"

# echo ""
# echo "updating all framework_precompiled_wp8.zip"
# echo ""

# for dest in `find ${QUICK_V3_ROOT} -type f | grep "/res/framework_precompiled_wp8.zip"`
# do
#     echo $dest
#     cp lib/framework_precompiled/framework_precompiled_wp8.zip $dest
# done

#
cp lib/framework_precompiled/framework_precompiled_wp8.zip \
	templates/PROJECT_TEMPLATE_01/proj.wp8/__PROJECT_PACKAGE_LAST_NAME_L__/Assets/Resources/res/framework_precompiled_wp8.zip
echo ""
echo "UPDATE templates/PROJECT_TEMPLATE_01/proj.wp8/__PROJECT_PACKAGE_LAST_NAME_L__/Assets/Resources/res/framework_precompiled_wp8.zip"

echo ""
echo "DONE"
echo ""
	