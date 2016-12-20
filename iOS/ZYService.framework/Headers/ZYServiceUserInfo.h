//
//  ZYServiceUserInfo.h
//  ZYService
//
//  Created by 何伟东 on 16/9/8.
//  Copyright © 2016年 章鱼彩票. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZYServiceUserInfo : NSObject
/**
 *  登录用户openId
 */
@property(nonatomic,strong) NSString *userOpenId;
/**
 *  登录用户的sessionToken
 */
@property(nonatomic,strong) NSString *sessionToken;
/**
 *  登录用户token
 */
@property(nonatomic,strong) NSString *userToken;

/**
 alloc 一个实例
 
 @return <#return value description#>
 */
+(ZYServiceUserInfo*)userInfo;


@end
