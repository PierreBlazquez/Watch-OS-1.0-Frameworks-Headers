//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDateFormatter, NSMutableDictionary, NSString;

@interface CKSQLite : NSObject
{
    BOOL _corrupt;
    NSString *_path;
    NSString *_schema;
    NSString *_schemaVersion;
    NSString *_objectClassPrefix;
    struct sqlite3 *_db;
    unsigned int _openCount;
    NSMutableDictionary *_statementsBySQL;
    NSDateFormatter *_dateFormatter;
}

- (void)executeSQL:(id)arg1;
- (id)creationDate;
- (void)rollback;
- (void)open;
@property(readonly, nonatomic) BOOL isOpen;
@property(nonatomic) struct sqlite3 *db; // @synthesize db=_db;
- (BOOL)openWithError:(id *)arg1;
- (void).cxx_destruct;
- (void)remove;
- (void)close;
- (void)end;
- (void)begin;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void)dealloc;
- (id)propertyForKey:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(readonly, nonatomic) NSMutableDictionary *statementsBySQL; // @synthesize statementsBySQL=_statementsBySQL;
@property(nonatomic) BOOL corrupt; // @synthesize corrupt=_corrupt;
@property(nonatomic) unsigned int openCount; // @synthesize openCount=_openCount;
@property(retain, nonatomic) NSString *objectClassPrefix; // @synthesize objectClassPrefix=_objectClassPrefix;
- (id)selectObjectOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3;
- (id)selectAllObjectsOfClass:(Class)arg1;
- (long long)insertOrReplaceObject:(id)arg1;
- (void)deleteFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;
- (unsigned int)selectCountFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;
- (id)select:(id)arg1 from:(id)arg2;
- (void)setDateProperty:(id)arg1 forKey:(id)arg2;
- (id)datePropertyForKey:(id)arg1;
- (void)vacuum;
- (void)analyze;
- (id)initWithPath:(id)arg1 schema:(id)arg2;
- (id)_boxedValue:(id)arg1 forObjcCProperty:(id)arg2;
- (id)_boxedPropertyDictionary:(id)arg1 forObjCClass:(id)arg2;
- (id)selectAllFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;
- (id)selectAllObjectsOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3;
- (long long)insertOrReplaceInto:(id)arg1 values:(id)arg2;
- (id)_tableNameForClass:(Class)arg1;
- (long long)lastInsertRowID;
- (void)removePropertyForKey:(id)arg1;
- (id)allTableNames;
- (id)statementForSQL:(id)arg1;
- (void)executeSQL:(id)arg1 arguments:(void *)arg2;
- (void)raise:(id)arg1;
- (void)dropAllTables;
- (void)removeAllStatements;
@property(readonly, nonatomic) NSString *schemaVersion; // @synthesize schemaVersion=_schemaVersion;
- (id)select:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4;
@property(readonly, nonatomic) NSString *schema; // @synthesize schema=_schema;
- (id)_createSchemaHash;

@end

