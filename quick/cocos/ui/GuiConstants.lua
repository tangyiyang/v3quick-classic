
cc.ui = cc.ui or {}

cc.ui.BrightStyle =
{
    none = -1,
    normal = 0,
    highlight = 1,
}

cc.ui.TextureResType =
{
    localType = 0,
    plistType = 1,
}

cc.ui.TouchEventType =
{
    began = 0,
    moved = 1,
    ended = 2,
    canceled = 3,
}

cc.ui.SizeType =
{
    absolute = 0,
    percent = 1,
}

cc.ui.PositionType = {
    absolute = 0,
    percent = 1,
}

cc.ui.CheckBoxEventType =
{
    selected = 0,
    unselected = 1,
}

cc.ui.TextFiledEventType =
{
    attach_with_ime = 0,
    detach_with_ime = 1,
    insert_text = 2,
    delete_backward = 3,
}

cc.ui.LayoutBackGroundColorType =
{
    none = 0,
    solid = 1,
    gradient = 2,
}

cc.ui.LayoutType =
{
    ABSOLUTE = 0,
    VERTICAL = 1,
    HORIZONTAL = 2,
    RELATIVE = 3,
}

cc.ui.LayoutParameterType =
{
    none = 0,
    linear = 1,
    relative = 2,
}

cc.ui.LinearGravity =
{
    none = 0,
    left = 1,
    top = 2,
    right = 3,
    bottom = 4,
    centerVertical = 5,
    centerHorizontal = 6,
}

cc.ui.RelativeAlign =
{
    alignNone = 0,
    alignParentTopLeft = 1,
    alignParentTopCenterHorizontal = 2,
    alignParentTopRight = 3,
    alignParentLeftCenterVertical = 4,
    centerInParent = 5,
    alignParentRightCenterVertical = 6,
    alignParentLeftBottom = 7,
    alignParentBottomCenterHorizontal = 8,
    alignParentRightBottom = 9,
    locationAboveLeftAlign = 10,
    locationAboveCenter = 11,
    locationAboveRightAlign = 12,
    locationLeftOfTopAlign = 13,
    locationLeftOfCenter = 14,
    locationLeftOfBottomAlign = 15,
    locationRightOfTopAlign = 16,
    locationRightOfCenter = 17,
    locationRightOfBottomAlign = 18,
    locationBelowLeftAlign = 19,
    locationBelowCenter = 20,
    locationBelowRightAlign = 21,
}

cc.ui.SliderEventType = {percentChanged = 0}

cc.ui.LoadingBarDirection = { LEFT = 0, RIGHT = 1}

cc.ui.ScrollViewDir = {
    none = 0,
    vertical = 1,
    horizontal = 2,
    both = 3,
}

cc.ui.ScrollViewMoveDir = {
    none = 0,
    up = 1,
    down = 2,
    left = 3,
    right = 4,
}

cc.ui.ScrollviewEventType = {
    scrollToTop =  0,
    scrollToBottom =  1,
    scrollToLeft = 2,
    scrollToRight = 3,
    scrolling = 4,
    bounceTop = 5,
    bounceBottom = 6,
    bounceLeft = 7,
    bounceRight = 8,
}

cc.ui.ListViewDirection = {
    none = 0,
    vertical = 1,
    horizontal = 2,
}

cc.ui.ListViewMoveDirection = {
    none = 0,
    up = 1,
    down = 2,
    left = 3,
    right = 4,
}

cc.ui.ListViewEventType = {
    ONSELECTEDITEM_START = 0,
    ONSELECTEDITEM_END   = 1,
}

cc.ui.PageViewEventType = {
   turning = 0,
}

cc.ui.PVTouchDir = {
    touchLeft = 0,
    touchRight = 1,
}

cc.ui.ListViewGravity = {
    left = 0,
    right = 1,
    centerHorizontal = 2,
    top = 3,
    bottom = 4 ,
    centerVertical = 5,
}

cc.ui.TextType = {
    SYSTEM = 0,
    TTF    = 1,
}
