//
//  ZYQueryResponse.h
//  ZYService
//
//  Created by 何伟东 on 16/9/9.
//  Copyright © 2016年 章鱼彩票. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZYServicePage.h"

@interface ZYQueryResponse : NSObject
/**
 *  协议号
 */
@property(nonatomic,assign) NSInteger command;
/**
 *  状态码 	0 成功 其它 失败
 */
@property(nonatomic,assign) NSInteger code;
/**
 *  数据字段
 */
@property(nonatomic,strong) id data;
/**
 *  状态描述
 */
@property(nonatomic,strong) NSString *message;
/**
 *  分页
 */
@property(nonatomic,strong) ZYServicePage *page;
/**
 *  服务器时间
 */
@property(nonatomic,strong) NSString *timestamp;


@end
