可以获取QListView的windowFlags和testAttribute，输出QFlags<Qt::WindowType>(WindowTitleHint|WindowSystemMenuHint|WindowMinMaxButtonsHint|WindowCloseButtonHint|WindowFullscreenButtonHint) false
widget和listview中的scrollarea都不是WA_Hover的，而且也没进入那个notify的断点

5.12 调用顺序 QAbstractItemView::mouseMoveEvent->QListView::indexAt->QListView::visualRect->
              QListView::rectForIndex->QListViewPrivate::rectForIndex->
              QListViewPrivate::indexToListViewItem->
              QListModeViewBase::indexToListViewItem->
              QCommonListViewBase::viewOptions->
              QAbstractItemViewPrivate::viewOptionsV1->QListView::viewOptions->
              QAbstractItemView::viewOptions->QStyleOption::init
