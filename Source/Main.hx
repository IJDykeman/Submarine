package;


import openfl.display.Sprite;
import flash.events.Event;
import flash.events.MouseEvent;


class Main extends Sprite {
	var mainUI : UI;
	var world:World;


	
	public function new () {
		super();
		stage.color = 0x9CC2F2;
		world = new World();
		addChild(world);
		stage.addEventListener (Event.ENTER_FRAME, onEnterFrame);

		addEventListener (MouseEvent.MOUSE_DOWN, onMouseDown);

		mainUI = new UI();
		addChild(mainUI);


	}

	private function onEnterFrame (event:Event):Void {
		world.update();
		//UIAction action = 
	}

	private function onMouseDown (event:MouseEvent):Void {
		var clickX:Int = cast(event.stageX, Int);
		var clickY:Int = cast(event.stageY, Int);	
		handleUIAction(mainUI.getActionFromClick(clickX,clickY));
		//UIAction action = 

	}

	private function handleUIAction(action:UIAction){
		switch (action.type) {
			case UIActionNone:
			addChild(new Flotsam(0,0));
			case UIActionSetEnginePower:
			world.boot.setEnginePower(cast(action,SetEnginePowerUIAction).getPowerNormal());

		}
	}


	
	
}