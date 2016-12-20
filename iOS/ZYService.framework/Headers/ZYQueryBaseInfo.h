//
//  ZYQueryBaseInfo.h
//  ZYService
//
//  Created by 何伟东 on 16/9/9.
//  Copyright © 2016年 章鱼彩票. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZYQueryBaseInfo : NSObject

/**
 *  服务器URL
 */
@property(nonatomic,strong) NSString *serviceUrl;
/**
 *  app对应的clientId
 */
@property(nonatomic,strong) NSString *clientId;
/**
 *  app对应的appid
 */
@property(nonatomic,strong) NSString *appid;
/**
 *  产品id
 */
@property(nonatomic,strong) NSString *productId;
/**
 *  渠道号
 */
@property(nonatomic,strong) NSString *channelId;

/**
 alloc一个实例
 
 @return <#return value description#>
 */
+(ZYQueryBaseInfo*)baseInfo;

@end
