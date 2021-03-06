/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileSetVersion : PBCodable <NSCopying> {
    struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } * _availableTiles;
    unsigned int  _availableTilesCount;
    unsigned int  _availableTilesSpace;
    struct GEOGenericTile { unsigned int x1; unsigned int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } * _genericTiles;
    unsigned int  _genericTilesCount;
    unsigned int  _genericTilesSpace;
    struct { 
        unsigned int supportedLanguagesVersion : 1; 
        unsigned int timeToLiveSeconds : 1; 
    }  _has;
    unsigned int  _identifier;
    unsigned int  _supportedLanguagesVersion;
    unsigned int  _timeToLiveSeconds;
}

@property (nonatomic, readonly) struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*availableTiles;
@property (nonatomic, readonly) unsigned int availableTilesCount;
@property (nonatomic, readonly) struct GEOGenericTile { unsigned int x1; unsigned int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*genericTiles;
@property (nonatomic, readonly) unsigned int genericTilesCount;
@property (nonatomic) BOOL hasSupportedLanguagesVersion;
@property (nonatomic) BOOL hasTimeToLiveSeconds;
@property (nonatomic) unsigned int identifier;
@property (nonatomic) unsigned int supportedLanguagesVersion;
@property (nonatomic) unsigned int timeToLiveSeconds;

- (void)addAvailableTiles:(struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })arg1;
- (void)addGenericTile:(struct GEOGenericTile { unsigned int x1; unsigned int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })arg1;
- (struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)availableTiles;
- (struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })availableTilesAtIndex:(unsigned int)arg1;
- (unsigned int)availableTilesCount;
- (void)clearAvailableTiles;
- (void)clearGenericTiles;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (struct GEOGenericTile { unsigned int x1; unsigned int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })genericTileAtIndex:(unsigned int)arg1;
- (struct GEOGenericTile { unsigned int x1; unsigned int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)genericTiles;
- (unsigned int)genericTilesCount;
- (BOOL)hasSupportedLanguagesVersion;
- (BOOL)hasTimeToLiveSeconds;
- (unsigned int)hash;
- (unsigned int)identifier;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAvailableTiles:(struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg1 count:(unsigned int)arg2;
- (void)setGenericTiles:(struct GEOGenericTile { unsigned int x1; unsigned int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)arg1 count:(unsigned int)arg2;
- (void)setHasSupportedLanguagesVersion:(BOOL)arg1;
- (void)setHasTimeToLiveSeconds:(BOOL)arg1;
- (void)setIdentifier:(unsigned int)arg1;
- (void)setSupportedLanguagesVersion:(unsigned int)arg1;
- (void)setTimeToLiveSeconds:(unsigned int)arg1;
- (unsigned int)supportedLanguagesVersion;
- (unsigned int)timeToLiveSeconds;
- (void)writeTo:(id)arg1;

@end
