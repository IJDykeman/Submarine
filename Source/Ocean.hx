

package;


import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Sprite;
import openfl.Assets;


class Ocean extends Sprite {
	
	var square : Sprite;



	public function new () {
		super ();
		square = new Sprite();
        square.graphics.lineStyle(0, 0x294973);
        square.graphics.beginFill(0x294973, 1);
        square.graphics.drawRect(0, 0, 2000,2000);
        square.x = 0;
        square.y = Constants.oceanLevel*Constants.pixelsPerMeter;
		this.addChild(square);


		
	}
	
	
}