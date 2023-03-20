///////////////////////////////////////////////////////////
//  Link.cpp
//  Implementation of the Class Link
//  Created on:      11-mars-2023 10:47:26
//  Original author: franc
///////////////////////////////////////////////////////////

#include "Link.h"


Link::Link(std::string linkType, const Record& rec1, const Record& rec2, bool bidirectional)
	: m_linkType(linkType), m_record1(rec1), m_record2(rec2), m_bidirectional(bidirectional)
{
}

Link* Link::clone() const
{
	// a completer: alloue un nouvel objet identique � this et retourne le pointeur
	return new Link(m_linkType, m_record1, m_record2, m_bidirectional);
}

std::ostream& operator<<(std::ostream& o, const Link& link)
{
	// a completer
	return o;
}
