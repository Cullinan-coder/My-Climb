from django.urls import path
from . import views

urlpatterns = [
    path('', views.home, name='home'),
    path('products/<int:product_id>/', views.product_detail, name='product_detail'),
    path('categories/<int:category_id>/', views.category_products, name='category_products'),

    # Cart
    path('cart/', views.cart_view, name='cart'),
    path('cart/add/<int:product_id>/', views.add_to_cart, name='add_to_cart'),
    path('cart/remove/<int:product_id>/', views.remove_from_cart, name='remove_from_cart'),

    # Order
    path('checkout/', views.checkout, name='checkout'),
    path('orders/', views.order_history, name='order_history'),

    # Favorites
    path('favorites/', views.favorite_list, name='favorites'),
    path('favorites/add/<int:product_id>/', views.add_favorite, name='add_favorite'),
    path('favorites/remove/<int:product_id>/', views.remove_favorite, name='remove_favorite'),

    # Auth
    path('signup/', views.signup_view, name='signup'),
]
