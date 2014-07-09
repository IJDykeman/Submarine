#ifndef INCLUDED_ShipEnd
#define INCLUDED_ShipEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(ShipEnd)


class ShipEnd_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ShipEnd_obj OBJ_;

	public:
		ShipEnd_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("ShipEnd"); }
		::String __ToString() const { return HX_CSTRING("ShipEnd.") + tag; }

		static ::ShipEnd Bow;
		static inline ::ShipEnd Bow_dyn() { return Bow; }
		static ::ShipEnd Stern;
		static inline ::ShipEnd Stern_dyn() { return Stern; }
};


#endif /* INCLUDED_ShipEnd */ 
