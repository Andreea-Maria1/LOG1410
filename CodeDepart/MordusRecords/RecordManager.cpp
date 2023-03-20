///////////////////////////////////////////////////////////
//  RecordManager.cpp
//  Implementation of the Class RecordManager
//  Created on:      11-mars-2023 10:47:26
//  Original author: franc
///////////////////////////////////////////////////////////

#include <algorithm>

#include "RecordManager.h"

RecordManager::RecordManager()
{
}

Record& RecordManager::addRecord(std::string name)
{
    // À compléter: ajouter une nouvelle fiche en construisant une fiche qui sera copiée
    // 	            insérer la copie dans le conteneur STL
    //              retourner la référence à la copie qui vient d'être créée
}

Record& RecordManager::addRecord(const Record& rec)
{
    // À compléter: ajouter une nouvelle fiche en clonant la fiche passée en paramètre
    // 	            insérer la copie dans le conteneur STL
    //              retourner la référence à la copie qui vient d'être créée
}

RecordIterator RecordManager::begin()
{
    // À compléter
}

RecordIterator RecordManager::end()
{
    // À compléter
}

RecordIterator_const RecordManager::cbegin() const
{
    // À compléter
}

RecordIterator_const RecordManager::cend() const
{
    // À compléter
}

void RecordManager::deleteRecord(RecordIterator_const child)
{
    // À compléter
}

RecordIterator RecordManager::findRecord(std::string name)
{
    // À compléter : parcourir les éléments contenus dans le conteneur et retourner le 1er dont le nom correspond au nom passé en paramètre
    return std::find_if(m_records.begin(), m_records.end(), [&](const RecordPtr& rec) { return rec->getTitle() == name; });
}

RecordIterator_const RecordManager::findRecord(std::string name) const
{
    // À compléter : parcourir les éléments contenus dans le conteneur et retourner le 1er dont le nom correspond au nom passé en paramètre
    return std::find_if(m_records.cbegin(), m_records.cend(), [&](const RecordPtr& rec) { return rec->getTitle() == name; });
}
