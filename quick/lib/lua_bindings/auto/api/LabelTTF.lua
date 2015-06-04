
--------------------------------
-- @module LabelTTF
-- @extend Node,LabelProtocol,BlendProtocol
-- @parent_module cc

--------------------------------
--  enable or disable shadow for the label 
-- @function [parent=#LabelTTF] enableShadow 
-- @param self
-- @param #size_table shadowOffset
-- @param #float shadowOpacity
-- @param #float shadowBlur
-- @param #bool mustUpdateTexture
-- @return LabelTTF#LabelTTF self (return value: cc.LabelTTF)
        
--------------------------------
-- 
-- @function [parent=#LabelTTF] setDimensions 
-- @param self
-- @param #size_table dim
-- @return LabelTTF#LabelTTF self (return value: cc.LabelTTF)
        
--------------------------------
-- 
-- @function [parent=#LabelTTF] getFontSize 
-- @param self
-- @return float#float ret (return value: float)
        
--------------------------------
-- 
-- @function [parent=#LabelTTF] getString 
-- @param self
-- @return string#string ret (return value: string)
        
--------------------------------
-- 
-- @function [parent=#LabelTTF] setFlippedY 
-- @param self
-- @param #bool flippedY
-- @return LabelTTF#LabelTTF self (return value: cc.LabelTTF)
        
--------------------------------
-- 
-- @function [parent=#LabelTTF] setFlippedX 
-- @param self
-- @param #bool flippedX
-- @return LabelTTF#LabelTTF self (return value: cc.LabelTTF)
        
--------------------------------
--  set the text definition used by this label 
-- @function [parent=#LabelTTF] setTextDefinition 
-- @param self
-- @param #cc.FontDefinition theDefinition
-- @return LabelTTF#LabelTTF self (return value: cc.LabelTTF)
        
--------------------------------
-- 
-- @function [parent=#LabelTTF] setFontName 
-- @param self
-- @param #string fontName
-- @return LabelTTF#LabelTTF self (return value: cc.LabelTTF)
        
--------------------------------
-- 
-- @function [parent=#LabelTTF] getHorizontalAlignment 
-- @param self
-- @return int#int ret (return value: int)
        
--------------------------------
--  initializes the LabelTTF with a font name, alignment, dimension and font size 
-- @function [parent=#LabelTTF] initWithStringAndTextDefinition 
-- @param self
-- @param #string string
-- @param #cc.FontDefinition textDefinition
-- @return bool#bool ret (return value: bool)
        
--------------------------------
--  changes the string to render<br>
-- warning Changing the string is as expensive as creating a new LabelTTF. To obtain better performance use LabelAtlas
-- @function [parent=#LabelTTF] setString 
-- @param self
-- @param #string label
-- @return LabelTTF#LabelTTF self (return value: cc.LabelTTF)
        
--------------------------------
--  initializes the LabelTTF with a font name, alignment, dimension and font size 
-- @function [parent=#LabelTTF] initWithString 
-- @param self
-- @param #string string
-- @param #string fontName
-- @param #float fontSize
-- @param #size_table dimensions
-- @param #int hAlignment
-- @param #int vAlignment
-- @return bool#bool ret (return value: bool)
        
--------------------------------
--  set text tinting 
-- @function [parent=#LabelTTF] setFontFillColor 
-- @param self
-- @param #color3b_table tintColor
-- @param #bool mustUpdateTexture
-- @return LabelTTF#LabelTTF self (return value: cc.LabelTTF)
        
--------------------------------
-- 
-- @function [parent=#LabelTTF] getBlendFunc 
-- @param self
-- @return BlendFunc#BlendFunc ret (return value: cc.BlendFunc)
        
--------------------------------
--  enable or disable stroke 
-- @function [parent=#LabelTTF] enableStroke 
-- @param self
-- @param #color3b_table strokeColor
-- @param #float strokeSize
-- @param #bool mustUpdateTexture
-- @return LabelTTF#LabelTTF self (return value: cc.LabelTTF)
        
--------------------------------
-- 
-- @function [parent=#LabelTTF] getDimensions 
-- @param self
-- @return size_table#size_table ret (return value: size_table)
        
--------------------------------
-- 
-- @function [parent=#LabelTTF] setVerticalAlignment 
-- @param self
-- @param #int verticalAlignment
-- @return LabelTTF#LabelTTF self (return value: cc.LabelTTF)
        
--------------------------------
-- 
-- @function [parent=#LabelTTF] setFontSize 
-- @param self
-- @param #float fontSize
-- @return LabelTTF#LabelTTF self (return value: cc.LabelTTF)
        
--------------------------------
-- 
-- @function [parent=#LabelTTF] getVerticalAlignment 
-- @param self
-- @return int#int ret (return value: int)
        
--------------------------------
--  get the text definition used by this label 
-- @function [parent=#LabelTTF] getTextDefinition 
-- @param self
-- @return FontDefinition#FontDefinition ret (return value: cc.FontDefinition)
        
--------------------------------
-- 
-- @function [parent=#LabelTTF] setBlendFunc 
-- @param self
-- @param #cc.BlendFunc blendFunc
-- @return LabelTTF#LabelTTF self (return value: cc.LabelTTF)
        
--------------------------------
-- 
-- @function [parent=#LabelTTF] getFontName 
-- @param self
-- @return string#string ret (return value: string)
        
--------------------------------
-- 
-- @function [parent=#LabelTTF] setHorizontalAlignment 
-- @param self
-- @param #int alignment
-- @return LabelTTF#LabelTTF self (return value: cc.LabelTTF)
        
--------------------------------
--  disable shadow rendering 
-- @function [parent=#LabelTTF] disableShadow 
-- @param self
-- @return LabelTTF#LabelTTF self (return value: cc.LabelTTF)
        
--------------------------------
--  disable stroke 
-- @function [parent=#LabelTTF] disableStroke 
-- @param self
-- @return LabelTTF#LabelTTF self (return value: cc.LabelTTF)
        
--------------------------------
-- @overload self         
-- @overload self, string, string, float, size_table, int, int         
-- @function [parent=#LabelTTF] create
-- @param self
-- @param #string string
-- @param #string fontName
-- @param #float fontSize
-- @param #size_table dimensions
-- @param #int hAlignment
-- @param #int vAlignment
-- @return LabelTTF#LabelTTF ret (return value: cc.LabelTTF)

--------------------------------
--  Create a lable with string and a font definition
-- @function [parent=#LabelTTF] createWithFontDefinition 
-- @param self
-- @param #string string
-- @param #cc.FontDefinition textDefinition
-- @return LabelTTF#LabelTTF ret (return value: cc.LabelTTF)
        
--------------------------------
-- 
-- @function [parent=#LabelTTF] getBoundingBox 
-- @param self
-- @return rect_table#rect_table ret (return value: rect_table)
        
--------------------------------
-- js NA<br>
-- lua NA
-- @function [parent=#LabelTTF] getDescription 
-- @param self
-- @return string#string ret (return value: string)
        
--------------------------------
-- 
-- @function [parent=#LabelTTF] getContentSize 
-- @param self
-- @return size_table#size_table ret (return value: size_table)
        
--------------------------------
-- 
-- @function [parent=#LabelTTF] visit 
-- @param self
-- @param #cc.Renderer renderer
-- @param #mat4_table parentTransform
-- @param #unsigned int parentFlags
-- @return LabelTTF#LabelTTF self (return value: cc.LabelTTF)
        
--------------------------------
-- js ctor
-- @function [parent=#LabelTTF] LabelTTF 
-- @param self
-- @return LabelTTF#LabelTTF self (return value: cc.LabelTTF)
        
return nil
