#ifndef _H_6982ECF636246F0DF8C45B910F94C60E_Int16MultiArray_DCPS_H_
#define _H_6982ECF636246F0DF8C45B910F94C60E_Int16MultiArray_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Int16MultiArray_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Int16MultiArray_TypeSupportInterface;

            typedef Int16MultiArray_TypeSupportInterface * Int16MultiArray_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Int16MultiArray_TypeSupportInterface> Int16MultiArray_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Int16MultiArray_TypeSupportInterface> Int16MultiArray_TypeSupportInterface_out;


            class Int16MultiArray_DataWriter;

            typedef Int16MultiArray_DataWriter * Int16MultiArray_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Int16MultiArray_DataWriter> Int16MultiArray_DataWriter_var;
            typedef DDS_DCPSInterface_out < Int16MultiArray_DataWriter> Int16MultiArray_DataWriter_out;


            class Int16MultiArray_DataReader;

            typedef Int16MultiArray_DataReader * Int16MultiArray_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Int16MultiArray_DataReader> Int16MultiArray_DataReader_var;
            typedef DDS_DCPSInterface_out < Int16MultiArray_DataReader> Int16MultiArray_DataReader_out;


            class Int16MultiArray_DataReaderView;

            typedef Int16MultiArray_DataReaderView * Int16MultiArray_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Int16MultiArray_DataReaderView> Int16MultiArray_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Int16MultiArray_DataReaderView> Int16MultiArray_DataReaderView_out;

            struct Int16MultiArray_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Int16MultiArray_, struct Int16MultiArray_Seq_uniq_> Int16MultiArray_Seq;
            typedef DDS_DCPSSequence_var < Int16MultiArray_Seq> Int16MultiArray_Seq_var;
            typedef DDS_DCPSSequence_out < Int16MultiArray_Seq> Int16MultiArray_Seq_out;

            class  Int16MultiArray_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Int16MultiArray_TypeSupportInterface_ptr _ptr_type;
                typedef Int16MultiArray_TypeSupportInterface_var _var_type;

                static Int16MultiArray_TypeSupportInterface_ptr _duplicate (Int16MultiArray_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Int16MultiArray_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Int16MultiArray_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Int16MultiArray_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Int16MultiArray_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Int16MultiArray_TypeSupportInterface () {};
                ~Int16MultiArray_TypeSupportInterface () {};
            private:
                Int16MultiArray_TypeSupportInterface (const Int16MultiArray_TypeSupportInterface &);
                Int16MultiArray_TypeSupportInterface & operator = (const Int16MultiArray_TypeSupportInterface &);
            };

            class  Int16MultiArray_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Int16MultiArray_DataWriter_ptr _ptr_type;
                typedef Int16MultiArray_DataWriter_var _var_type;

                static Int16MultiArray_DataWriter_ptr _duplicate (Int16MultiArray_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Int16MultiArray_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Int16MultiArray_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Int16MultiArray_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Int16MultiArray_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Int16MultiArray_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Int16MultiArray_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Int16MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Int16MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Int16MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Int16MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Int16MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Int16MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Int16MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Int16MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Int16MultiArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Int16MultiArray_& instance_data) = 0;

            protected:
                Int16MultiArray_DataWriter () {};
                ~Int16MultiArray_DataWriter () {};
            private:
                Int16MultiArray_DataWriter (const Int16MultiArray_DataWriter &);
                Int16MultiArray_DataWriter & operator = (const Int16MultiArray_DataWriter &);
            };

            class  Int16MultiArray_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Int16MultiArray_DataReader_ptr _ptr_type;
                typedef Int16MultiArray_DataReader_var _var_type;

                static Int16MultiArray_DataReader_ptr _duplicate (Int16MultiArray_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Int16MultiArray_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Int16MultiArray_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Int16MultiArray_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Int16MultiArray_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Int16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Int16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Int16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Int16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Int16MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Int16MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Int16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Int16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Int16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Int16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Int16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Int16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Int16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Int16MultiArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Int16MultiArray_& instance) = 0;

            protected:
                Int16MultiArray_DataReader () {};
                ~Int16MultiArray_DataReader () {};
            private:
                Int16MultiArray_DataReader (const Int16MultiArray_DataReader &);
                Int16MultiArray_DataReader & operator = (const Int16MultiArray_DataReader &);
            };

            class  Int16MultiArray_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Int16MultiArray_DataReaderView_ptr _ptr_type;
                typedef Int16MultiArray_DataReaderView_var _var_type;

                static Int16MultiArray_DataReaderView_ptr _duplicate (Int16MultiArray_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Int16MultiArray_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Int16MultiArray_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Int16MultiArray_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Int16MultiArray_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Int16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Int16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Int16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Int16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Int16MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Int16MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Int16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Int16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Int16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Int16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Int16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Int16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Int16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Int16MultiArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Int16MultiArray_& instance) = 0;

            protected:
                Int16MultiArray_DataReaderView () {};
                ~Int16MultiArray_DataReaderView () {};
            private:
                Int16MultiArray_DataReaderView (const Int16MultiArray_DataReaderView &);
                Int16MultiArray_DataReaderView & operator = (const Int16MultiArray_DataReaderView &);
            };
        }

    }

}

#endif
