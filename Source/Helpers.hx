package;

class Helpers{

	public static function clamp(value : Float, min : Float, max : Float) : Float
	{
		if (value < min)
		return min;
		else if (value > max)
		return max;
		else
		return value;
	}
}