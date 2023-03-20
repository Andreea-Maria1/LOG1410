///////////////////////////////////////////////////////////
//  BaseProperty.cpp
//  Implementation of the Class BaseProperty
//  Created on:      11-mars-2023 10:47:25
//  Original author: franc
///////////////////////////////////////////////////////////

//poser des questions sur ca
#include "BaseProperty.h"

int BaseProperty::m_indent = 0;
PropertyContainer BaseProperty::m_emptyContainer;

BaseProperty& BaseProperty::addProperty(const BaseProperty& prop)
{
	// Ne rien ajouter et retourner un objet fictif obtenu par un iterateur fourni par le conteneur vide
	return *(*m_emptyContainer.begin());
}

PropertyIterator BaseProperty::begin()
{
	return m_emptyContainer.begin();
}

PropertyIterator BaseProperty::end()
{
	return m_emptyContainer.end();
}

PropertyIterator_const BaseProperty::cbegin() const
{
	return m_emptyContainer.cbegin();
}

PropertyIterator_const BaseProperty::cend() const
{
	return m_emptyContainer.cend();
}

void BaseProperty::deleteProperty(PropertyIterator_const child)
{
	// Echoue silencieusement
}

std::ostream& BaseProperty::indent(std::ostream& o) const
{
	for (int i = 0; i < m_indent; ++i)
		o << '\t';
	return o;
}

std::ostream& operator<<(std::ostream& o, const BaseProperty& prop)
{
	return o;
}
