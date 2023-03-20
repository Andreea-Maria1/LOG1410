///////////////////////////////////////////////////////////
//  FloatProperty.cpp
//  Implementation of the Class FloatProperty
//  Created on:      11-mars-2023 10:47:25
//  Original author: franc
///////////////////////////////////////////////////////////

#include "FloatProperty.h"
using namespace std;

FloatProperty::FloatProperty(std::string name, float f)
	: BaseProperty(name), m_value(f)
{
}

FloatProperty* FloatProperty::clone() const
{
	// a completer: alloue un nouvel objet identique a this et retourne le pointeur
	return new FloatProperty(m_name, m_value);
}

std::string FloatProperty::getValueAsString() const
{
	// a completer
	return to_string(m_value);
}

std::ostream& FloatProperty::printToStream(std::ostream& o) const
{
	// a completer
	return o;

}