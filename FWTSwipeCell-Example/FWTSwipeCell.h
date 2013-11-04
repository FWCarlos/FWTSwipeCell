//
//  FWTSwipeCell.h
//  FWTSwipeCell-Example
//
//  Created by Carlos Vidal Pallín on 04/11/2013.
//  Copyright (c) 2013 Future Workshops Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FWTSwipeCell;

typedef enum {
    FWTSwipeCellActionSelectRow = 0,
    FWTSwipeCellActionArchiveRow,
    FWTSwipeCellActionDeleteRow,
    FWTSwipeCellActionWillBeginDragging
}FWTSwipeCellActionsEnum;

typedef void (^FWTSwipeCellActionBlock)(FWTSwipeCell *cell, FWTSwipeCellActionsEnum action);

@interface FWTSwipeCell : UITableViewCell

@property (nonatomic, strong) UIButton *archiveButton;
@property (nonatomic, strong) FWTSwipeCellActionBlock actionBlock;

- (void)restoreScroll;

@end
