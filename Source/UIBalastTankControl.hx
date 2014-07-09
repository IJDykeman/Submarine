package;

import flash.Lib;
import flash.display.Bitmap;
import openfl.Assets;
import flash.events.Event;
import flash.geom.Rectangle;
import motion.Actuate;
import motion.easing.Quad;

class UIBalastTankControl extends UILever{
	var shipEnd:ShipEnd;


	public function new(nShipEnd:ShipEnd){
		super();
		shipEnd= nShipEnd;
		bitmap = new Bitmap (Assets.getBitmapData ("assets/verticlePipe.png"));
		bitmap.width = 100;
		bitmap.height = bitmap.width*1.61803398875;
		addChild(bitmap);
		bitmap.y= Lib.current.stage.stageHeight-bitmap.height;
		bitmap.x=255;
		switch(shipEnd){
			case Stern:
			bitmap.x+=0;
			case Bow:
			bitmap.x+=120;
		}

		handle = new Bitmap (Assets.getBitmapData ("assets/woodenBall.png"));
		handle.width = 160;
		handle.height = 40;
		handle.x = bitmap.x+bitmap.width/2-handle.width/2;
		handle.y= bitmap.y+bitmap.height-bitmap.height*.5-handle.height/2;
		addChild(handle);
		var limits1:Rectangle = bitmap.getBounds(bitmap.parent);
		setNormal(.5);
		

	}


	public override function onClick(mouseX:Int,mouseY:Int) : UIAction{
		super.onClick(mouseX,mouseY);
		if(Math.abs(settingNormal-.5)<.1){
			settingNormal = .5;
		}
		return new SetBalastTankLevelUIAction(settingNormal, shipEnd);
	}

	public function getShipEnd():ShipEnd{
		return shipEnd;
	}






}