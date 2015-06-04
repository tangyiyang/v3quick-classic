
--------------------------------
-- @module LabelBMFont
-- @extend Node,LabelProtocol,BlendProtocol
-- @parent_module cc

--------------------------------
-- 
-- @function [parent=#LabelBMFont] setLineBreakWithoutSpace 
-- @param self
-- @param #bool breakWithoutSpace
-- @return LabelBMFont#LabelBMFont self (return value: cc.LabelBMFont)
        
--------------------------------
-- 
-- @function [parent=#LabelBMFont] getBlendFunc 
-- @param self
-- @return BlendFunc#BlendFunc ret (return value: cc.BlendFunc)
        
--------------------------------
-- 
-- @function [parent=#LabelBMFont] isOpacityModifyRGB 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#LabelBMFont] getLetter 
-- @param self
-- @param #int ID
-- @return Sprite#Sprite ret (return value: cc.Sprite)
        
--------------------------------
-- 
-- @function [parent=#LabelBMFont] getString 
-- @param self
-- @return string#string ret (return value: string)
        
--------------------------------
-- 
-- @function [parent=#LabelBMFont] setBlendFunc 
-- @param self
-- @param #cc.BlendFunc blendFunc
-- @return LabelBMFont#LabelBMFont self (return value: cc.LabelBMFont)
        
--------------------------------
-- 
-- @function [parent=#LabelBMFont] setString 
-- @param self
-- @param #string newString
-- @return LabelBMFont#LabelBMFont self (return value: cc.LabelBMFont)
        
--------------------------------
--  init a bitmap font atlas with an initial string and the FNT file 
-- @function [parent=#LabelBMFont] initWithString 
-- @param self
-- @param #string str
-- @param #string fntFile
-- @param #float width
-- @param #int alignment
-- @param #vec2_table imageOffset
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#LabelBMFont] setOpacityModifyRGB 
-- @param self
-- @param #bool isOpacityModifyRGB
-- @return LabelBMFont#LabelBMFont self (return value: cc.LabelBMFont)
        
--------------------------------
-- 
-- @function [parent=#LabelBMFont] getFntFile 
-- @param self
-- @return string#string ret (return value: string)
        
--------------------------------
-- 
-- @function [parent=#LabelBMFont] setFntFile 
-- @param self
-- @param #string fntFile
-- @param #vec2_table imageOffset
-- @return LabelBMFont#LabelBMFont self (return value: cc.LabelBMFont)
        
--------------------------------
-- 
-- @function [parent=#LabelBMFont] setAlignment 
-- @param self
-- @param #int alignment
-- @return LabelBMFont#LabelBMFont self (return value: cc.LabelBMFont)
        
--------------------------------
-- 
-- @function [parent=#LabelBMFont] setWidth 
-- @param self
-- @param #float width
-- @return LabelBMFont#LabelBMFont self (return value: cc.LabelBMFont)
        
--------------------------------
-- @overload self         
-- @overload self, string, string, float, int, vec2_table         
-- @function [parent=#LabelBMFont] create
-- @param self
-- @param #string str
-- @param #string fntFile
-- @param #float width
-- @param #int alignment
-- @param #vec2_table imageOffset
-- @return LabelBMFont#LabelBMFont ret (return value: cc.LabelBMFont)

--------------------------------
-- 
-- @function [parent=#LabelBMFont] getBoundingBox 
-- @param self
-- @return rect_table#rect_table ret (return value: rect_table)
        
--------------------------------
-- 
-- @function [parent=#LabelBMFont] getDescription 
-- @param self
-- @return string#string ret (return value: string)
        
--------------------------------
-- 
-- @function [parent=#LabelBMFont] setColor 
-- @param self
-- @param #color3b_table color
-- @return LabelBMFont#LabelBMFont self (return value: cc.LabelBMFont)
        
--------------------------------
-- 
-- @function [parent=#LabelBMFont] getChildByTag 
-- @param self
-- @param #int tag
-- @return Node#Node ret (return value: cc.Node)
        
--------------------------------
-- 
-- @function [parent=#LabelBMFont] getContentSize 
-- @param self
-- @return size_table#size_table ret (return value: size_table)
        
--------------------------------
-- js ctor
-- @function [parent=#LabelBMFont] LabelBMFont 
-- @param self
-- @return LabelBMFont#LabelBMFont self (return value: cc.LabelBMFont)
        
return nil
