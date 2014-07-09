package;
import flash.display.Sprite;

class UI extends Sprite{
	var throttleControl : ThrottleControl;
	var sternBalastControl : UIBalastTankControl;
	var bowBalastControl : UIBalastTankControl;

	function new(){
		super();
		throttleControl = new ThrottleControl();
		sternBalastControl = new UIBalastTankControl(Bow);
		bowBalastControl = new UIBalastTankControl(Stern);
		addChild(throttleControl);
		addChild(sternBalastControl);
		addChild(bowBalastControl);
	}

	public function getActionsFromClick(x:Int,y:Int):Array<UIAction>{
		var result : Array<UIAction> = [throttleControl.onClick(x,y),sternBalastControl.onClick(x,y),bowBalastControl.onClick(x,y)];
		//return throttleControl.onClick(x,y);
		return result;
	}

	public function handleResize(nWidth:Int, nHeight:Int){
		throttleControl.onResize(nWidth,nHeight);
		sternBalastControl.onResize(nWidth,nHeight);
		bowBalastControl.onResize(nWidth,nHeight);
	}

}