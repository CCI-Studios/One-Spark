<?php
function onespark_custom_form_alter(&$form, $form_state, $form_id)
{
    if ($form_id == 'registration_form')
    {
        $form['actions']['submit']['#attributes']['class'][] = 'green-button';
    }
    else if ($form_id = 'commerce_checkout_form_registrationcommerce_checkout_form_registration')
    {
        $form['buttons']['continue']['#attributes']['class'][] = 'green-button';
    }
}
?>
