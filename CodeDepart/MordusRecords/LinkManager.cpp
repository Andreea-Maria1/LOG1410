///////////////////////////////////////////////////////////
//  LinkManager.cpp
//  Implementation of the Class LinkManager
//  Created on:      11-mars-2023 10:47:26
//  Original author: franc
///////////////////////////////////////////////////////////

#include "LinkManager.h"

LinkManager::LinkManager()
{
}

Link& LinkManager::addLink(std::string linkType, const Record& rec1, const Record& rec2, bool bidirectional)
{
	// a completer: ajouter un nouveau lien en construisant un lien qui sera copie
	// 	            inserer la copie dans le conteneur STL
	//              retourner la reference a la copie qui vient d'etre creee

		// Link link(linkType, rec1, rec2, bidirectional);
		// m_links.push_back(link);
		// return m_links.back();
}

Link& LinkManager::addLink(const Link& link)
{
	// a completer: ajouter un nouveau lien en clonant le lien qui est passe en parametre
	// 	            inserer la copie dans le conteneur STL
	//              retourner la reference a la copie qui vient d'etre creee
}

LinkIterator LinkManager::begin()
{
	//a completer
	return LinkIterator(m_links.begin());
}

LinkIterator LinkManager::end()
{
	// a complater
	return LinkIterator(m_links.end());
}

LinkIterator_const LinkManager::cbegin() const
{
	// a completer
	return LinkIterator_const(m_links.cbegin());
}

LinkIterator_const LinkManager::cend() const
{
	// e completer
	return LinkIterator_const(m_links.cend());
}

void LinkManager::deleteLink(LinkIterator_const child)
{
	// e completer
	m_links.erase(child);
}

LinkIterator LinkManager::findLinkName(std::string name)
{
	// a completer : parcourir les elements contenus dans le conteneur et retourner le 1er dont le nom d'un des 2 enregistrement correspond au nom passe en parametre


}

LinkIterator_const LinkManager::findLinkName(std::string name) const
{
	// � compl�ter : parcourir les �l�ments contenus dans le conteneur et retourner le 1er dont le nom d'un des 2 enregistrement correspond au nom pass� en param�tre
}

LinkIterator LinkManager::findLinkType(std::string linkType)
{
	// � compl�ter : parcourir les �l�ments contenus dans le conteneur et retourner le 1er dont le type correspond au type pass� en param�tre
}

LinkIterator_const LinkManager::findLinkType(std::string linkType) const
{
	// � compl�ter : parcourir les �l�ments contenus dans le conteneur et retourner le 1er dont le type correspond au type pass� en param�tre
}

