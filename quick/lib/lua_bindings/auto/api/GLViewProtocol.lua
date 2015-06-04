
--------------------------------
-- @module GLViewProtocol
-- @parent_module cc

--------------------------------
-- Set the frame size of EGL view.
-- @function [parent=#GLViewProtocol] setFrameSize 
-- @param self
-- @param #float width
-- @param #float height
-- @return GLViewProtocol#GLViewProtocol self (return value: cc.GLViewProtocol)
        
--------------------------------
-- Get the opengl view port rectangle.
-- @function [parent=#GLViewProtocol] getViewPortRect 
-- @param self
-- @return rect_table#rect_table ret (return value: rect_table)
        
--------------------------------
--  Open or close IME keyboard , subclass must implement this method. 
-- @function [parent=#GLViewProtocol] setIMEKeyboardState 
-- @param self
-- @param #bool open
-- @return GLViewProtocol#GLViewProtocol self (return value: cc.GLViewProtocol)
        
--------------------------------
-- Set Scissor rectangle with points.
-- @function [parent=#GLViewProtocol] setScissorInPoints 
-- @param self
-- @param #float x
-- @param #float y
-- @param #float w
-- @param #float h
-- @return GLViewProtocol#GLViewProtocol self (return value: cc.GLViewProtocol)
        
--------------------------------
-- 
-- @function [parent=#GLViewProtocol] getViewName 
-- @param self
-- @return string#string ret (return value: string)
        
--------------------------------
--  Get whether opengl render system is ready, subclass must implement this method. 
-- @function [parent=#GLViewProtocol] isOpenGLReady 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
--  Force destroying EGL view, subclass must implement this method. 
-- @function [parent=#GLViewProtocol] end 
-- @param self
-- @return GLViewProtocol#GLViewProtocol self (return value: cc.GLViewProtocol)
        
--------------------------------
-- Get scale factor of the vertical direction.
-- @function [parent=#GLViewProtocol] getScaleY 
-- @param self
-- @return float#float ret (return value: float)
        
--------------------------------
-- Get scale factor of the horizontal direction.
-- @function [parent=#GLViewProtocol] getScaleX 
-- @param self
-- @return float#float ret (return value: float)
        
--------------------------------
-- Get the visible origin point of opengl viewport.
-- @function [parent=#GLViewProtocol] getVisibleOrigin 
-- @param self
-- @return vec2_table#vec2_table ret (return value: vec2_table)
        
--------------------------------
-- Get the frame size of EGL view.<br>
-- In general, it returns the screen size since the EGL view is a fullscreen view.
-- @function [parent=#GLViewProtocol] getFrameSize 
-- @param self
-- @return size_table#size_table ret (return value: size_table)
        
--------------------------------
--  Get design resolution size.<br>
-- Default resolution size is the same as 'getFrameSize'.
-- @function [parent=#GLViewProtocol] getDesignResolutionSize 
-- @param self
-- @return size_table#size_table ret (return value: size_table)
        
--------------------------------
-- Polls input events. Subclass must implement methods if platform<br>
-- does not provide event callbacks.
-- @function [parent=#GLViewProtocol] pollInputEvents 
-- @param self
-- @return GLViewProtocol#GLViewProtocol self (return value: cc.GLViewProtocol)
        
--------------------------------
--  Exchanges the front and back buffers, subclass must implement this method. 
-- @function [parent=#GLViewProtocol] swapBuffers 
-- @param self
-- @return GLViewProtocol#GLViewProtocol self (return value: cc.GLViewProtocol)
        
--------------------------------
-- Set the design resolution size.<br>
-- param width Design resolution width.<br>
-- param height Design resolution height.<br>
-- param resolutionPolicy The resolution policy desired, you may choose:<br>
-- [1] EXACT_FIT Fill screen by stretch-to-fit: if the design resolution ratio of width to height is different from the screen resolution ratio, your game view will be stretched.<br>
-- [2] NO_BORDER Full screen without black border: if the design resolution ratio of width to height is different from the screen resolution ratio, two areas of your game view will be cut.<br>
-- [3] SHOW_ALL  Full screen with black border: if the design resolution ratio of width to height is different from the screen resolution ratio, two black borders will be shown.
-- @function [parent=#GLViewProtocol] setDesignResolutionSize 
-- @param self
-- @param #float width
-- @param #float height
-- @param #int resolutionPolicy
-- @return GLViewProtocol#GLViewProtocol self (return value: cc.GLViewProtocol)
        
--------------------------------
--  returns the current Resolution policy 
-- @function [parent=#GLViewProtocol] getResolutionPolicy 
-- @param self
-- @return int#int ret (return value: int)
        
--------------------------------
-- Set opengl view port rectangle with points.
-- @function [parent=#GLViewProtocol] setViewPortInPoints 
-- @param self
-- @param #float x
-- @param #float y
-- @param #float w
-- @param #float h
-- @return GLViewProtocol#GLViewProtocol self (return value: cc.GLViewProtocol)
        
--------------------------------
-- Get the current scissor rectangle
-- @function [parent=#GLViewProtocol] getScissorRect 
-- @param self
-- @return rect_table#rect_table ret (return value: rect_table)
        
--------------------------------
-- 
-- @function [parent=#GLViewProtocol] setViewName 
-- @param self
-- @param #string viewname
-- @return GLViewProtocol#GLViewProtocol self (return value: cc.GLViewProtocol)
        
--------------------------------
-- Get the visible rectangle of opengl viewport.
-- @function [parent=#GLViewProtocol] getVisibleRect 
-- @param self
-- @return rect_table#rect_table ret (return value: rect_table)
        
--------------------------------
-- Get the visible area size of opengl viewport.
-- @function [parent=#GLViewProtocol] getVisibleSize 
-- @param self
-- @return size_table#size_table ret (return value: size_table)
        
--------------------------------
-- Get whether GL_SCISSOR_TEST is enable
-- @function [parent=#GLViewProtocol] isScissorEnabled 
-- @param self
-- @return bool#bool ret (return value: bool)
        
return nil
