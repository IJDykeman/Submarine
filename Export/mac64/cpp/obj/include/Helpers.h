#ifndef INCLUDED_Helpers
#define INCLUDED_Helpers

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Helpers)


class HXCPP_CLASS_ATTRIBUTES  Helpers_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Helpers_obj OBJ_;
		Helpers_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Helpers_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Helpers_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Helpers"); }

		static Float clamp( Float value,Float min,Float max);
		static Dynamic clamp_dyn();

};


#endif /* INCLUDED_Helpers */ 
