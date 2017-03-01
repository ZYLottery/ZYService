//
//  ZYMobileResponse.h
//  ZYServers
//
//  Created by 何伟东 on 16/9/8.
//  Copyright © 2016年 章鱼彩票. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZYServicePage.h"
#import "ZYMessageDataModel.h"
@interface ZYMobileResponse : NSObject

/**
 *  命令执行结果	0为处理成功，否则为业务内可预期的错误，服务端非预期异常直接通过状态码返回，详见：接口调用统一规范
 */
@property(nonatomic,assign) int code;
/**
 *  命令执行结果提示信息	成功或出错的提示文案，供客户端告知用户或记录日志
 */
@property(nonatomic,strong) NSString *message;
/**
 *  建议跳转地址	建议返回地址（例如http地址或约定APP内页面路径），供客户端进行自动页面跳转使用
 */
@property(nonatomic,strong) NSString *redirect;
/**
 *  分类 1 native page 2 webview内嵌打开 3 浏览器打开
 */
@property(nonatomic,assign) int pageType;
/**
 *  接口所在服务器当前时间	服务器当前时间（通常为北京时间，需要根据时区参数转换），格式如下：yyyy-MM-dd HH:mm:ss Z
 *  客户端根据此时间与客户端设备的时间差来修正请求需要签名接口时的timestamp参数
 *  客户端使用时必须自行判断时区
 */
@property(nonatomic,strong) NSString *datetime;
/**
 *  服务器当前时间的时间戳（距离UTC 1970-01-01 00:00:00的秒数）	同上，仅格式区别
 */
@property(nonatomic,strong) NSString *timestamp;
/**
 *  命令的请求响应结果数据（JSON）	详见各命令说明
 */
@property(nonatomic,strong) NSString *data;
/**
 *  分页响应数据	详见：分页响应数据格式
 */
@property(nonatomic,strong) ZYServicePage *page;
/**
 *  是否加密	同发起请求规范
 */
@property(nonatomic,assign) int encrypt;
/**
 *  提示信息的级别	返回数值越大则级别越高，具体针对不同级别的行为由客户端自行实现，可提供指导性规范
 *  注意：为了节约消息体的空间，如接口未特殊指定时不返回此字段
 */
@property(nonatomic,strong) NSString *messageLevel;

/**
 提示信息窗口数据
 */
@property(nonatomic,strong) ZYMessageDataModel * messageData;
@end
