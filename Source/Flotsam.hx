package;
import openfl.Assets;
import flash.display.Bitmap;
import flash.display.Sprite;


class Flotsam extends UnderwaterObject{

	public function new(nX:Float,nY:Float){
		super();
		bitmap = new Bitmap (Assets.getBitmapData ("assets/soccerBall.png"));
		bitmap.width = 20;
		bitmap.height = 20;
		addChild(bitmap);
		x = nX;
		y = nY;


	}

}