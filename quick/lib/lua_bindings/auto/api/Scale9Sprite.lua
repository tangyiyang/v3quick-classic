
--------------------------------
-- @module Scale9Sprite
-- @extend Node
-- @parent_module cc

--------------------------------
-- Creates and returns a new sprite object with the specified cap insets.<br>
-- You use this method to add cap insets to a sprite or to change the existing<br>
-- cap insets of a sprite. In both cases, you get back a new image and the <br>
-- original sprite remains untouched.<br>
-- param capInsets The values to use for the cap insets.
-- @function [parent=#Scale9Sprite] resizableSpriteWithCapInsets 
-- @param self
-- @param #rect_table capInsets
-- @return Scale9Sprite#Scale9Sprite ret (return value: cc.Scale9Sprite)
        
--------------------------------
-- 
-- @function [parent=#Scale9Sprite] setInsetBottom 
-- @param self
-- @param #float var
-- @return Scale9Sprite#Scale9Sprite self (return value: cc.Scale9Sprite)
        
--------------------------------
-- @overload self, string         
-- @overload self, string, rect_table         
-- @function [parent=#Scale9Sprite] initWithSpriteFrameName
-- @param self
-- @param #string spriteFrameName
-- @param #rect_table capInsets
-- @return bool#bool ret (return value: bool)

--------------------------------
-- 
-- @function [parent=#Scale9Sprite] setInsetTop 
-- @param self
-- @param #float var
-- @return Scale9Sprite#Scale9Sprite self (return value: cc.Scale9Sprite)
        
--------------------------------
-- 
-- @function [parent=#Scale9Sprite] init 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#Scale9Sprite] setPreferredSize 
-- @param self
-- @param #size_table var
-- @return Scale9Sprite#Scale9Sprite self (return value: cc.Scale9Sprite)
        
--------------------------------
-- 
-- @function [parent=#Scale9Sprite] setSpriteFrame 
-- @param self
-- @param #cc.SpriteFrame spriteFrame
-- @return Scale9Sprite#Scale9Sprite self (return value: cc.Scale9Sprite)
        
--------------------------------
-- @overload self, cc.SpriteBatchNode, rect_table, rect_table         
-- @overload self, cc.SpriteBatchNode, rect_table, bool, rect_table         
-- @function [parent=#Scale9Sprite] initWithBatchNode
-- @param self
-- @param #cc.SpriteBatchNode batchnode
-- @param #rect_table rect
-- @param #bool rotated
-- @param #rect_table capInsets
-- @return bool#bool ret (return value: bool)

--------------------------------
-- 
-- @function [parent=#Scale9Sprite] getInsetBottom 
-- @param self
-- @return float#float ret (return value: float)
        
--------------------------------
-- 
-- @function [parent=#Scale9Sprite] getCapInsets 
-- @param self
-- @return rect_table#rect_table ret (return value: rect_table)
        
--------------------------------
-- 
-- @function [parent=#Scale9Sprite] updateWithBatchNode 
-- @param self
-- @param #cc.SpriteBatchNode batchnode
-- @param #rect_table rect
-- @param #bool rotated
-- @param #rect_table capInsets
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#Scale9Sprite] getInsetRight 
-- @param self
-- @return float#float ret (return value: float)
        
--------------------------------
-- 
-- @function [parent=#Scale9Sprite] getOriginalSize 
-- @param self
-- @return size_table#size_table ret (return value: size_table)
        
--------------------------------
-- @overload self, string, rect_table         
-- @overload self, string, rect_table, rect_table         
-- @overload self, rect_table, string         
-- @overload self, string         
-- @function [parent=#Scale9Sprite] initWithFile
-- @param self
-- @param #string file
-- @param #rect_table rect
-- @param #rect_table capInsets
-- @return bool#bool ret (return value: bool)

--------------------------------
-- 
-- @function [parent=#Scale9Sprite] getInsetTop 
-- @param self
-- @return float#float ret (return value: float)
        
--------------------------------
-- 
-- @function [parent=#Scale9Sprite] setInsetLeft 
-- @param self
-- @param #float var
-- @return Scale9Sprite#Scale9Sprite self (return value: cc.Scale9Sprite)
        
--------------------------------
-- @overload self, cc.SpriteFrame         
-- @overload self, cc.SpriteFrame, rect_table         
-- @function [parent=#Scale9Sprite] initWithSpriteFrame
-- @param self
-- @param #cc.SpriteFrame spriteFrame
-- @param #rect_table capInsets
-- @return bool#bool ret (return value: bool)

--------------------------------
-- 
-- @function [parent=#Scale9Sprite] getPreferredSize 
-- @param self
-- @return size_table#size_table ret (return value: size_table)
        
--------------------------------
-- 
-- @function [parent=#Scale9Sprite] setCapInsets 
-- @param self
-- @param #rect_table var
-- @return Scale9Sprite#Scale9Sprite self (return value: cc.Scale9Sprite)
        
--------------------------------
-- 
-- @function [parent=#Scale9Sprite] getInsetLeft 
-- @param self
-- @return float#float ret (return value: float)
        
--------------------------------
-- 
-- @function [parent=#Scale9Sprite] setInsetRight 
-- @param self
-- @param #float var
-- @return Scale9Sprite#Scale9Sprite self (return value: cc.Scale9Sprite)
        
--------------------------------
-- @overload self, string, rect_table, rect_table         
-- @overload self         
-- @overload self, rect_table, string         
-- @overload self, string, rect_table         
-- @overload self, string         
-- @function [parent=#Scale9Sprite] create
-- @param self
-- @param #string file
-- @param #rect_table rect
-- @param #rect_table capInsets
-- @return Scale9Sprite#Scale9Sprite ret (return value: cc.Scale9Sprite)

--------------------------------
-- @overload self, string, rect_table         
-- @overload self, string         
-- @function [parent=#Scale9Sprite] createWithSpriteFrameName
-- @param self
-- @param #string spriteFrameName
-- @param #rect_table capInsets
-- @return Scale9Sprite#Scale9Sprite ret (return value: cc.Scale9Sprite)

--------------------------------
-- @overload self, cc.SpriteFrame, rect_table         
-- @overload self, cc.SpriteFrame         
-- @function [parent=#Scale9Sprite] createWithSpriteFrame
-- @param self
-- @param #cc.SpriteFrame spriteFrame
-- @param #rect_table capInsets
-- @return Scale9Sprite#Scale9Sprite ret (return value: cc.Scale9Sprite)

--------------------------------
-- 
-- @function [parent=#Scale9Sprite] isOpacityModifyRGB 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#Scale9Sprite] setColor 
-- @param self
-- @param #color3b_table color
-- @return Scale9Sprite#Scale9Sprite self (return value: cc.Scale9Sprite)
        
--------------------------------
-- 
-- @function [parent=#Scale9Sprite] setOpacityModifyRGB 
-- @param self
-- @param #bool bValue
-- @return Scale9Sprite#Scale9Sprite self (return value: cc.Scale9Sprite)
        
--------------------------------
-- 
-- @function [parent=#Scale9Sprite] setOpacity 
-- @param self
-- @param #unsigned char opacity
-- @return Scale9Sprite#Scale9Sprite self (return value: cc.Scale9Sprite)
        
--------------------------------
-- 
-- @function [parent=#Scale9Sprite] updateDisplayedOpacity 
-- @param self
-- @param #unsigned char parentOpacity
-- @return Scale9Sprite#Scale9Sprite self (return value: cc.Scale9Sprite)
        
--------------------------------
-- 
-- @function [parent=#Scale9Sprite] updateDisplayedColor 
-- @param self
-- @param #color3b_table parentColor
-- @return Scale9Sprite#Scale9Sprite self (return value: cc.Scale9Sprite)
        
--------------------------------
-- 
-- @function [parent=#Scale9Sprite] setContentSize 
-- @param self
-- @param #size_table size
-- @return Scale9Sprite#Scale9Sprite self (return value: cc.Scale9Sprite)
        
--------------------------------
-- js ctor
-- @function [parent=#Scale9Sprite] Scale9Sprite 
-- @param self
-- @return Scale9Sprite#Scale9Sprite self (return value: cc.Scale9Sprite)
        
return nil
