package;
import flash.display.Sprite;

class UI extends Sprite{
	var throttleControl : ThrottleControl;

	function new(){
		super();
		throttleControl = new ThrottleControl();
		addChild(throttleControl);
	}

	public function getActionFromClick(x:Int,y:Int):UIAction{
		return throttleControl.onClick(x,y);
	}

}