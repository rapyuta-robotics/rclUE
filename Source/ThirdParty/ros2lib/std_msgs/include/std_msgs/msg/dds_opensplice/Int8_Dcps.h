#ifndef _H_042A0B12D85F373AAF0D15F2E9B119D2_Int8_DCPS_H_
#define _H_042A0B12D85F373AAF0D15F2E9B119D2_Int8_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Int8_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Int8_TypeSupportInterface;

            typedef Int8_TypeSupportInterface * Int8_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Int8_TypeSupportInterface> Int8_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Int8_TypeSupportInterface> Int8_TypeSupportInterface_out;


            class Int8_DataWriter;

            typedef Int8_DataWriter * Int8_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Int8_DataWriter> Int8_DataWriter_var;
            typedef DDS_DCPSInterface_out < Int8_DataWriter> Int8_DataWriter_out;


            class Int8_DataReader;

            typedef Int8_DataReader * Int8_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Int8_DataReader> Int8_DataReader_var;
            typedef DDS_DCPSInterface_out < Int8_DataReader> Int8_DataReader_out;


            class Int8_DataReaderView;

            typedef Int8_DataReaderView * Int8_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Int8_DataReaderView> Int8_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Int8_DataReaderView> Int8_DataReaderView_out;

            struct Int8_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Int8_, struct Int8_Seq_uniq_> Int8_Seq;
            typedef DDS_DCPSSequence_var < Int8_Seq> Int8_Seq_var;
            typedef DDS_DCPSSequence_out < Int8_Seq> Int8_Seq_out;

            class  Int8_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Int8_TypeSupportInterface_ptr _ptr_type;
                typedef Int8_TypeSupportInterface_var _var_type;

                static Int8_TypeSupportInterface_ptr _duplicate (Int8_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Int8_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Int8_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Int8_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Int8_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Int8_TypeSupportInterface () {};
                ~Int8_TypeSupportInterface () {};
            private:
                Int8_TypeSupportInterface (const Int8_TypeSupportInterface &);
                Int8_TypeSupportInterface & operator = (const Int8_TypeSupportInterface &);
            };

            class  Int8_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Int8_DataWriter_ptr _ptr_type;
                typedef Int8_DataWriter_var _var_type;

                static Int8_DataWriter_ptr _duplicate (Int8_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Int8_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Int8_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Int8_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Int8_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Int8_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Int8_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Int8_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Int8_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Int8_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Int8_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Int8_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Int8_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Int8_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Int8_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Int8_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Int8_& instance_data) = 0;

            protected:
                Int8_DataWriter () {};
                ~Int8_DataWriter () {};
            private:
                Int8_DataWriter (const Int8_DataWriter &);
                Int8_DataWriter & operator = (const Int8_DataWriter &);
            };

            class  Int8_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Int8_DataReader_ptr _ptr_type;
                typedef Int8_DataReader_var _var_type;

                static Int8_DataReader_ptr _duplicate (Int8_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Int8_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Int8_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Int8_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Int8_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Int8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Int8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Int8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Int8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Int8_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Int8_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Int8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Int8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Int8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Int8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Int8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Int8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Int8_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Int8_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Int8_& instance) = 0;

            protected:
                Int8_DataReader () {};
                ~Int8_DataReader () {};
            private:
                Int8_DataReader (const Int8_DataReader &);
                Int8_DataReader & operator = (const Int8_DataReader &);
            };

            class  Int8_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Int8_DataReaderView_ptr _ptr_type;
                typedef Int8_DataReaderView_var _var_type;

                static Int8_DataReaderView_ptr _duplicate (Int8_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Int8_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Int8_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Int8_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Int8_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Int8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Int8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Int8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Int8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Int8_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Int8_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Int8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Int8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Int8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Int8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Int8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Int8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Int8_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Int8_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Int8_& instance) = 0;

            protected:
                Int8_DataReaderView () {};
                ~Int8_DataReaderView () {};
            private:
                Int8_DataReaderView (const Int8_DataReaderView &);
                Int8_DataReaderView & operator = (const Int8_DataReaderView &);
            };
        }

    }

}

#endif
