//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEBuildable-Protocol.h>

@class DVTFileDataType, DVTFilePath, IDEBuildParameters, NSDictionary, NSString;

@protocol IDEBuildableProduct <IDEBuildable>
@property(readonly) BOOL isWatchAppRunsIndependentlyOfCompanionApplication;
@property(readonly) BOOL isWatchOnlyApplication;
@property(readonly) BOOL productIsExecutable;
@property(readonly) NSDictionary *productSettings;
@property(readonly) NSString *iconPath;
@property(readonly, copy) DVTFileDataType *fileDataType;
@property(readonly) DVTFilePath *filePath;
- (void)setProductSetting:(id)arg1 forKey:(NSString *)arg2;
- (id)productSettingForKey:(NSString *)arg1;
- (DVTFilePath *)filePathForBuildParameters:(IDEBuildParameters *)arg1;

@optional
@property(readonly) BOOL isEmbeddablePackageProduct;
@end

