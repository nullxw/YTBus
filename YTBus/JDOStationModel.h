//
//  JDOStationModel.h
//  YTBus
//
//  Created by zhang yi on 14-10-28.
//  Copyright (c) 2014年 胶东在线. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JDOStationModel : NSObject

@property(nonatomic,strong) NSString *fid;
@property(nonatomic,strong) NSString *name;
@property(nonatomic,strong) NSString *direction;
@property(nonatomic,strong) NSNumber *gpsX;
@property(nonatomic,strong) NSNumber *gpsY;
@property(nonatomic,strong) NSNumber *distance;

@end
