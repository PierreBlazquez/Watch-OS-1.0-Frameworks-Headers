//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VMUDirectedGraph : NSObject
{
    unsigned int _nodeCount;
    unsigned int _edgeCount;
    unsigned int _nextNodeName;
    unsigned int _nextEdgeName;
    struct _VMUDirectedGraphNode *_nodes;
    struct _VMUDirectedGraphEdge *_edges;
    unsigned int *_nodeNameMap;
    unsigned int _edgeCapacity;
    BOOL _needsAdjacencyUpdate;
}

+ (void)initialize;
@property(readonly, nonatomic) unsigned int edgeNamespaceSize; // @synthesize edgeNamespaceSize=_nextEdgeName;
@property(readonly, nonatomic) unsigned int nodeNamespaceSize; // @synthesize nodeNamespaceSize=_nextNodeName;
@property(readonly, nonatomic) unsigned int edgeCount; // @synthesize edgeCount=_edgeCount;
- (void)invertEdges;
- (void)_dumpAdjacencyList;
- (void)breadthFirstSearch:(unsigned int)arg1 nodeVisitBlock:(CDUnknownBlockType)arg2 edgeVisitBlock:(CDUnknownBlockType)arg3;
- (void)depthFirstSearch:(unsigned int)arg1 nodeVisitBlock:(CDUnknownBlockType)arg2 edgeVisitBlock:(CDUnknownBlockType)arg3;
- (void)withEdgeMarkingMap:(CDUnknownBlockType)arg1;
- (void)withNodeMarkingMap:(CDUnknownBlockType)arg1;
- (id)invertedGraph;
- (id)subgraphWithMarkedNodes:(void *)arg1 edges:(void *)arg2;
- (void)enumerateEdgesOfNode:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateEdgesWithBlock:(CDUnknownBlockType)arg1;
- (unsigned int)addEdgeFromNode:(unsigned int)arg1 toNode:(unsigned int)arg2;
- (id)initWithNodes:(unsigned int)arg1;
- (void)_bfsCore:(unsigned int)arg1 colors:(unsigned char *)arg2 nodeBlock:(CDUnknownBlockType)arg3 edgeBlock:(CDUnknownBlockType)arg4;
- (void)_searchMainLoop:(unsigned int)arg1 action:(CDUnknownBlockType)arg2;
- (void)_dfsCore:(unsigned int)arg1 colors:(unsigned char *)arg2 nodeBlock:(CDUnknownBlockType)arg3 edgeBlock:(CDUnknownBlockType)arg4;
- (void)_adjustAdjacencyMap;
- (void)enumerateNodesWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned int nodeCount; // @synthesize nodeCount=_nodeCount;
- (void)dealloc;

@end

