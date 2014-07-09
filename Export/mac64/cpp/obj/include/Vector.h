#ifndef INCLUDED_Vector
#define INCLUDED_Vector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Vector)


class HXCPP_CLASS_ATTRIBUTES  Vector_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Vector_obj OBJ_;
		Vector_obj();
		Void __construct(Float nX,Float nY);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Vector_obj > __new(Float nX,Float nY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Vector_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Vector"); }

		Float x;
		Float y;
};


#endif /* INCLUDED_Vector */ 
