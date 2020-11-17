// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTools_HeaderFile
#define _BOPTools_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TopoDS_Shape.hxx>  
#include <TopTools_ShapeMapHasher.hxx>

#include <NCollection_Map.hxx>   

typedef NCollection_Map<TopoDS_Shape, TopTools_ShapeMapHasher> BOPCol_MapOfShape;
typedef BOPCol_MapOfShape::Iterator BOPCol_MapIteratorOfMapOfShape;
#include <TopoDS_Shape.hxx>
#include <TopTools_ShapeMapHasher.hxx>
#include <NCollection_IndexedMap.hxx>

#include <TopAbs_ShapeEnum.hxx>
#include <TopoDS_Shape.hxx>  
#include <TopTools_ShapeMapHasher.hxx>
#include <NCollection_List.hxx>   
#include <TopoDS_Shape.hxx>
#include <NCollection_IndexedDataMap.hxx>

typedef NCollection_IndexedMap<TopoDS_Shape, TopTools_ShapeMapHasher> BOPCol_IndexedMapOfShape;
typedef NCollection_List<TopoDS_Shape> BOPCol_ListOfShape;
typedef BOPCol_ListOfShape::Iterator BOPCol_ListIteratorOfListOfShape;
typedef NCollection_IndexedDataMap<TopoDS_Shape, BOPCol_ListOfShape, TopTools_ShapeMapHasher> BOPCol_IndexedDataMapOfShapeListOfShape;

class TopoDS_Shape;
class BOPTools_ShapeSet;
class BOPTools_EdgeSet;
class BOPTools_AlgoTools;
class BOPTools_Set;
class BOPTools_SetMapHasher;
class BOPTools_AlgoTools2D;
class BOPTools_AlgoTools3D;



class BOPTools
{
public:

	DEFINE_STANDARD_ALLOC


		Standard_EXPORT static   void MapShapes(const TopoDS_Shape& S, BOPCol_MapOfShape& M);

	Standard_EXPORT static   void MapShapes(const TopoDS_Shape& S, BOPCol_IndexedMapOfShape& M);

	Standard_EXPORT static   void MapShapes(const TopoDS_Shape& S, const TopAbs_ShapeEnum T, BOPCol_IndexedMapOfShape& M);

	Standard_EXPORT static   void MapShapesAndAncestors(const TopoDS_Shape& S, const TopAbs_ShapeEnum TS, const TopAbs_ShapeEnum TA, BOPCol_IndexedDataMapOfShapeListOfShape& M);




protected:





private:




	friend class BOPTools_ShapeSet;
	friend class BOPTools_EdgeSet;
	friend class BOPTools_AlgoTools;
	friend class BOPTools_Set;
	friend class BOPTools_SetMapHasher;
	friend class BOPTools_AlgoTools2D;
	friend class BOPTools_AlgoTools3D;

};







#endif // _BOPTools_HeaderFile