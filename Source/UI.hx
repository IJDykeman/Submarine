package;
import flash.display.Sprite;

class UI extends Sprite{
	var throttleControl : ThrottleControl;
	var balastControl : UIBalastTankControl;

	function new(){
		super();
		throttleControl = new ThrottleControl();
		balastControl = new UIBalastTankControl();
		addChild(throttleControl);
		addChild(balastControl);
	}

	public function getActionsFromClick(x:Int,y:Int):Array<UIAction>{
		var result : Array<UIAction> = [throttleControl.onClick(x,y),balastControl.onClick(x,y)];
		//return throttleControl.onClick(x,y);
		return result;
	}

	public function handleResize(nWidth:Int, nHeight:Int){
		throttleControl.onResize(nWidth,nHeight);
		balastControl.onResize(nWidth,nHeight);
	}

}