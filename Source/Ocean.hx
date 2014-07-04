

package;


import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Sprite;
import openfl.Assets;


class Ocean extends Sprite {
	
	var square : Sprite;
	var oceanLevel : Float = 6*Constants.pixelsPerMeter;


	public function new () {
		super ();
		square = new Sprite();
        square.graphics.lineStyle(0, 0x294973);
        square.graphics.beginFill(0x294973, 1);
        square.graphics.drawRect(0, 0, 2000,2000);
        square.x = 0;
        square.y = oceanLevel;
		this.addChild(square);


		
	}
	
	
}